// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.92%
// test_accuracy: 53.37%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-17 13:45:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.541146, 0.541087,
    0.415252, -0.415125,
    -0.043797, 0.043784,
    -0.270656, 0.270580,
    -0.387820, 0.387845,
    -0.281903, 0.281889,
    0.056554, -0.056555,
    0.294348, -0.294348,
    -0.543779, 0.543843,
    0.273465, -0.273587,
    0.040364, -0.040323,
    0.126466, -0.126443,
};

float Cg_init[2] = {
    -0.200608, -0.200602
};

float xstd_init[12] = {
    0.001045, 0.000081, 0.011337, 0.079874, 0.003229, 0.000884, 0.094815, 0.189074, 0.000866, 0.000115, 0.019267, 0.075387
};

float xmean_init[12] = {
    0.006504, -0.007687, 0.004188, 0.145513, 0.008532, -0.006856, 0.104530, 0.432628, 0.004388, -0.007710, 0.010556, 0.131667
};

