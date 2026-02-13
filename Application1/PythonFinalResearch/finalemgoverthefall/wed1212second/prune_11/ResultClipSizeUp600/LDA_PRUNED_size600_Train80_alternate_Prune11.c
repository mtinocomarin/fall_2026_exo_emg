// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_11\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.39%
// test_accuracy: 73.30%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_23.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-17 17:04:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.007760, -0.007933,
    -0.300574, 0.300981,
    0.040506, -0.040568,
    -0.013141, 0.012951,
    1.953016, -1.953063,
    -1.663761, 1.663765,
    -0.190341, 0.190367,
    0.277334, -0.277320,
    -0.894602, 0.894568,
    -0.312045, 0.312086,
    0.499188, -0.499210,
    1.576725, -1.576747,
};

float Cg_init[2] = {
    -0.708762, -0.708793
};

float xstd_init[12] = {
    0.000946, 0.000081, 0.008365, 0.067299, 0.000767, 0.000124, 0.015515, 0.055007, 0.003499, 0.001064, 0.123250, 0.220801
};

float xmean_init[12] = {
    0.005567, -0.007753, 0.002367, 0.095238, 0.002419, -0.007847, 0.005541, 0.049524, 0.009203, -0.006512, 0.143204, 0.484156
};

