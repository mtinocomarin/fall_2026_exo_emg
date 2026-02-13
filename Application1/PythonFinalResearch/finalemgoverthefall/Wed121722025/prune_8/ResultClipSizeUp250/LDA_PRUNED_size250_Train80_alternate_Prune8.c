// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.73%
// test_accuracy: 57.81%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_19.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-17 13:45:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.893816, 0.893687,
    0.131093, -0.130864,
    0.123309, -0.123333,
    0.167928, -0.168051,
    -0.522425, 0.522457,
    -0.147729, 0.147733,
    0.052299, -0.052321,
    0.007716, -0.007739,
    -1.043007, 1.042900,
    0.577720, -0.577538,
    -0.379829, 0.379753,
    0.440216, -0.440247,
};

float Cg_init[2] = {
    -0.413047, -0.413017
};

float xstd_init[12] = {
    0.001035, 0.000079, 0.011676, 0.080780, 0.002454, 0.000695, 0.076152, 0.158332, 0.000930, 0.000125, 0.018607, 0.070703
};

float xmean_init[12] = {
    0.006471, -0.007688, 0.004861, 0.142917, 0.008505, -0.006904, 0.098194, 0.446042, 0.004392, -0.007711, 0.009028, 0.134792
};

