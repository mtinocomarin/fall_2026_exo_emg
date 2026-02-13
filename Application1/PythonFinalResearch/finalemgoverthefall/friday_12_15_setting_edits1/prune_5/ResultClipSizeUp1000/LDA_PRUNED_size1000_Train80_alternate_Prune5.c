// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.88%
// test_accuracy: 68.09%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:13:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.608071, 0.608126,
    0.106809, -0.106857,
    0.621005, -0.621029,
    0.205107, -0.205108,
    -0.413696, 0.413817,
    0.196894, -0.197043,
    -0.004889, 0.004902,
    0.186147, -0.186132,
    0.233767, -0.233707,
    -0.255468, 0.255384,
    -0.269250, 0.269268,
    0.281283, -0.281266,
};

float Cg_init[2] = {
    -0.209702, -0.209705
};

float xstd_init[12] = {
    0.003824, 0.001655, 0.331709, 0.122921, 0.000915, 0.000161, 0.041124, 0.131702, 0.000619, 0.000150, 0.044021, 0.139249
};

float xmean_init[12] = {
    0.009876, -0.005912, 0.411632, 1.037700, 0.003292, -0.007779, 0.008317, 0.616335, 0.003466, -0.007747, 0.012151, 0.684171
};

