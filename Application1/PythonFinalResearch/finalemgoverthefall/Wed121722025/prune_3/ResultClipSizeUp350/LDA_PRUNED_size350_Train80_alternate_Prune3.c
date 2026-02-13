// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.55%
// test_accuracy: 56.25%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-17 13:42:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.377780, 0.377764,
    0.197350, -0.197290,
    0.128588, -0.128591,
    -0.074229, 0.074187,
    -0.533103, 0.533107,
    -0.116286, 0.116287,
    0.211932, -0.211933,
    0.175719, -0.175728,
    -0.487455, 0.487448,
    0.185262, -0.185220,
    -0.065195, 0.065184,
    0.224196, -0.224224,
};

float Cg_init[2] = {
    -0.160772, -0.160771
};

float xstd_init[12] = {
    0.001007, 0.000081, 0.011659, 0.081108, 0.002722, 0.000750, 0.078873, 0.170308, 0.000861, 0.000115, 0.017466, 0.071184
};

float xmean_init[12] = {
    0.006408, -0.007692, 0.004444, 0.141150, 0.008662, -0.006856, 0.102299, 0.451264, 0.004322, -0.007717, 0.008352, 0.127127
};

