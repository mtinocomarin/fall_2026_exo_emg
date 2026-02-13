// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.67%
// test_accuracy: 53.75%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_8.txt', 'act1\\trial_12.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_25.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-17 13:47:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.585854, 0.585883,
    0.413257, -0.413284,
    -0.067737, 0.067741,
    -0.238901, 0.238899,
    -0.337547, 0.337487,
    -0.271015, 0.271117,
    0.032022, -0.032057,
    0.203353, -0.203323,
    -0.675223, 0.675376,
    0.362978, -0.363265,
    0.040636, -0.040581,
    0.143116, -0.143030,
};

float Cg_init[2] = {
    -0.225241, -0.225275
};

float xstd_init[12] = {
    0.001089, 0.000082, 0.011735, 0.081731, 0.003223, 0.000886, 0.093866, 0.185578, 0.000889, 0.000120, 0.019417, 0.076001
};

float xmean_init[12] = {
    0.006552, -0.007685, 0.004489, 0.145467, 0.008483, -0.006867, 0.102845, 0.433933, 0.004410, -0.007709, 0.010578, 0.129734
};

